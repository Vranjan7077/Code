import java.util.*;

public class TicTac
{

    ArrayList<Integer> admin;
    
    int board[]= {1,2,3,4,5,6,7,8,9};
    
    ArrayList<Integer> ai;

    int aiArray[]={2,7,6,9,5,1,4,3,8};

    
   
    public TicTac()
    {
        admin = new ArrayList<>();
        ai = new ArrayList<>();
    }


    void adminTurn(int position)
    {
        if(board[position-1]==position)
        {
            admin.add(aiArray[position-1]);
            board[position-1]=0;
        }
    }

    void aiTurn()
    {
        boolean input = false;
        if(ai.size()==0)
        {
            board[(admin.get(0)+1)%9]=1;
            ai.add(aiArray[(admin.get(0)+1)%9]);
            input=true;
        }
        if(!input)
        {
            for(int i=0; i<ai.size(); i++){
                for(int j=i+1; j<ai.size(); j++){
                    int temp = 15-(ai.get(i)+ai.get(j));
                    if(temp==0){
                        board[temp-1]=1;
                        ai.add(aiArray[temp-1]);
                        input=true;
                    }
                }
            }
        }

        if(!input){
            for(int i=0; i<admin.size(); i++){
                for(int j=i+1; j<admin.size(); j++){
                    int temp = 15 - (admin.get(i)+admin.get(j));
                    if(temp==0){
                        board[temp-1]=1;
                        ai.add(aiArray[temp-1]);
                        input=true;
                    }
                }
            }
        }
        if(!input){
            for(int i=0; i<board.length; i++){
                if(board[i]!=0 || board[i]!=1){
                    board[i]=1;
                    ai.add(aiArray[i]);
                    break;
                }
            }
        }
        

    }


        /*
        the total number of positionsibilities of admin/user
        */
    boolean adminWin()
    {
        if((board[0]==0 && board[1]==0 && board[2]==0) || 
            (board[3]==0 && board[4]==0 && board[5]==0) || 
            (board[6]==0 && board[7]==0 && board[8]==0)
            )
            return true;
        if((board[0]==0 && board[3]==0 && board[6]==0) || 
            (board[3]==0 && board[4]==0 && board[7]==0) || 
            (board[2]==0 && board[5]==0 && board[8]==0)
            )
            return true;
        if((board[0]==0 && board[4]==0 && board[8]==0) || 
            (board[2]==0 && board[4]==0 && board[6]==0)
            )
            return true;

        return false;
    }

        /*
        the total number of positionsibilities of Computer
        */
    boolean aiWin()
    {
        if( (board[0]==1 && board[1]==1 && board[2]==1) || 
            (board[3]==1 && board[4]==1 && board[5]==1) || 
            (board[6]==1 && board[7]==1 && board[8]==1)
            )
            return true;
        if((board[0]==1 && board[3]==1 && board[6]==1) || 
            (board[3]==1 && board[4]==1 && board[7]==1) || 
            (board[2]==1 && board[5]==1 && board[8]==1)
            )
            return true;
        if((board[0]==1 && board[4]==1 && board[8]==1) || 
            (board[2]==1 && board[4]==1 && board[6]==1))
            return true;

        return false;
    }


    void showBoard()
    {
        System.out.println("board[0]" + "board[1]" + "board[2]" + 
                            "board[3]" + "board[4]" + "board[5]" + 
                            "board[6]" + "board[7]" + "board[8]");
        
    }



    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        TicTac tictaktoe = new TicTac();
        boolean input = true;
        
        tictaktoe.showBoard();
    

        while(input)
        {

            int n=sc.nextInt();
            tictaktoe.adminTurn(n);
            tictaktoe.showBoard();
            if(tictaktoe.adminWin())
            {
                System.out.println("admin won!");
                break;
            }


            System.out.println("ai turn");
            tictaktoe.aiTurn();
            tictaktoe.showBoard();
            if(tictaktoe.aiWin())
            {
                System.out.println("ai won!");
                break;
            }

            for(int i=0; i<tictaktoe.board.length; i++)
            {
                if(tictaktoe.board[i]==9)
                {
                    input=true;
                }
            }
            if(!input)
            {
                break;
            }
             if(!input){
            System.out.println("No winner!");
        }
        }


    }

}