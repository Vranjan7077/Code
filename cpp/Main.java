import java.util.*;

class Currency 
{

    protected int amount;
    public Currency(int amount) 
    {
        super();
        this.amount = amount;

    }
    public int getAmount() 
    {
        return amount;
    }
    public void setAmount(int amount) 
    {
        this.amount = amount;
    }
}

/* class of denomination */

class Denomination 
{
    protected Denomination nextDenomination;
    public void setNextDenomination(Denomination nextDenomination) 
    {
        this.nextDenomination = nextDenomination;
    }
    public void denomination(Currency currency)
    {
        
    }
}

/* class of 100 note denomination */

class OnehDenomination extends Denomination 
{
    public OnehDenomination() 
    {
        super();
    }
    @Override
    public void denomination(Currency currency) 
    {
        if (currency != null) 
        {
            int amount = currency.getAmount();
            int remainder = amount;
            if (amount >= 100) 
            {
                int count = amount / 100;
                remainder = amount % 100;
                System.out.printf("Rs. 100 --> %d Note.\n", count);
            }

            if (remainder > 0 && this.nextDenomination != null) 
            {
                this.nextDenomination.denomination(new Currency(remainder));
            } 
        }
    }
}

/* class of 200 note denomination */

class TwohDenomination extends Denomination 
{
    public TwohDenomination() 
    {
        super();
    }
    @Override
    public void denomination(Currency currency) 
    {
        if (currency != null) {
            int amount = currency.getAmount();
            int remainder = amount;
            if (amount >= 200) {
                int count = amount / 200;
                remainder = amount % 200;
                System.out.printf("Rs. 200 --> %d Note.\n", count);
            }
            if (remainder > 0 && this.nextDenomination != null) 
            {
                this.nextDenomination.denomination(new Currency(remainder));
            }
        }
    }
}


/* class of 500 note denomination */

class FivehDenomination extends Denomination 
{
    public FivehDenomination() 
    {
        super();
    }
    @Override
    public void denomination(Currency currency) 
    {
        if (currency != null) 
        {
            int amount = currency.getAmount();
            int remainder = amount;
            if (amount >= 500) 
            {
                int count = amount / 500;
                remainder = amount % 500;
                System.out.printf("Rs. 500 --> %d Note.\n", count);
            }
            if (remainder > 0 && this.nextDenomination != null) 
            {
                this.nextDenomination.denomination(new Currency(remainder));
            }
        }
    }
}

/* class of 2000 note denomination */

class TwokDenomination extends Denomination 
{
    public TwokDenomination() 
    {
        super();
    }
    @Override
    public void denomination(Currency currency) 
    {
        if (currency != null) {
            int amount = currency.getAmount();
            int remainder = amount;
            if (amount >= 2000) 
            {
                int count = amount / 2000;
                remainder = amount % 2000;
                System.out.printf("Rs. 2000 --> %d Note.\n", count);
            }
            if (remainder > 0 && this.nextDenomination != null) 
            {
                this.nextDenomination.denomination(new Currency(remainder));
            }
        }
    }
}


/* class of withdraw */


class Withdraw
{
    protected static Denomination onehDenomination = new OnehDenomination();
    protected static Denomination twohDenomination = new TwohDenomination();
    protected static Denomination fivehDenomination = new FivehDenomination();
    protected static Denomination twokDenomination = new TwokDenomination();
    protected static Denomination currencyChain;

    static 
    {
        twokDenomination.setNextDenomination(fivehDenomination);
        fivehDenomination.setNextDenomination(twohDenomination);
        twohDenomination.setNextDenomination(onehDenomination);
        currencyChain = twokDenomination;
    }

    public static void withdrawal(Currency currency) 
    {
        if (currency != null) 
        {
            currencyChain.denomination(currency);
        }
    } 

}

/* Class amount in which we are calculating the amount deposit and showing the balance to the user */

class Amount 
{
    private int balance = 0;
    private int amount;

    public void deposit(int amount)
	{
		balance = balance + amount;
        System.out.println("Your account has been topup with :" +balance);
	}

	public void withdraw(int amount)
	{
		balance = balance - amount;
        System.out.println("Your current balance :" +balance);

	}

    public int getAmount() 
    {
        return this.amount;
    }
 
    public void setAmount(int amount) 
    {
        this.amount = amount;
    }
}








/* Main class*/

public class Main 
{
    

    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);
        System.out.println("What you want to do:\n 1. Top-up \n 2. Withdraw \n 3. Exit");
        int user_option = scanner.nextInt();
        switch(user_option)
        {
            case 1:
                System.out.println("You have choose the option to topup the account");
                System.out.println("Enter amount to add :");
                int amount = scanner.nextInt();
                Amount add_amount= new Amount();
                add_amount.deposit(amount);
                break;

            case 2:
                System.out.println("You have choose the option to withdraw the amount");
                System.out.println("Enter amount to withdraw :");
                amount = scanner.nextInt();
                if (isValid(amount)) 
                {
                    Withdraw.withdrawal(new Currency(amount));
                    Amount withdraw_amount= new Amount();
                    withdraw_amount.withdraw(amount);  
                } 
                break;
             case 3:
                break;   
        }   
    }


    public static void choose_option()
    {   
            Scanner sc = new Scanner(System.in);
            System.out.println("Available denominations:\n 1. 100 Denominations \n 2. 200 Denominations \n 3. 500 Denominations \n 4. 2000 Denominations");
            int option = sc.nextInt();
            switch(option)
            {
                case 1:
                    System.out.println("You have choosen 100 Denominations");
                    OnehDenomination one  = new OnehDenomination();
                    Currency currency = null;
                    one.denomination(currency);
                    break;

                case 2:
                    System.out.println("You have choosen 200 Denominations");
                    TwohDenomination two = new TwohDenomination();
                    Currency currency1 = null;
                    two.denomination(currency1);
                    break;
                   
                case 3:
                     System.out.println("You have choosen 500 Denominations");
                     FivehDenomination five  = new FivehDenomination();
                     Currency currency2 = null;
                     five.denomination(currency2);
                     break;

                case 4:    
                     System.out.println("You have choosen 2000 Denominations");
                     TwokDenomination twok = new TwokDenomination();
                     Currency currency3 = null;
                     twok.denomination(currency3);
                     break;
            }
    }

    private static boolean isValid(int amount) 
    {

        if (amount <= 0) 
        {
            System.out.println("Insufficient Balance. Try again!");
            return false;
        } 

        else if (amount % 100 == 0) 
        {   
             choose_option();
             return true;
       
        }
        else 
        {
            System.out.println("Please Enter the correct amount again for available denominations:");
            System.out.println("Denominations:\n 1. 100 \n 2. 200 \n 3. 500 \n 4. 2000");
            return false;
        }
    }
}