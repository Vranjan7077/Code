/*
Rat In a Maze All Paths
You are given a N*N maze with a rat placed at maze[0][0]. Find and print all paths that rat can follow to reach its destination i.e. maze[N-1][N-1]. Rat can move in any direc­tion ( left, right, up and down).
Value of every cell in the maze can either be 0 or 1. Cells with value 0 are blocked means rat can­not enter into those cells and those with value 1 are open.
Input Format
Line 1 : Integer N
Next N Lines : Each line will contain ith row elements (separated by space)
Output Format :
One Line for every possible solution. 
Every line will have N*N maze elements printed row wise and are separated by space. Only cells that are part of solution path should be 1, rest all cells should be 0.
Sample Input 1 :
3
1 0 1
1 0 1
1 1 1
Sample Output 1 : 1 0 0 1 0 0 1 1 1 
Sample Output 1 Explanation : Only 1 path is possible
Sample Input 2 : 
3
1 0 1
1 1 1
1 1 1
Sample Output 2 :
1 0 0 1 1 1 1 1 1 
1 0 0 1 0 0 1 1 1 
1 0 0 1 1 0 0 1 1 
1 0 0 1 1 1 0 0 1 
*/

/// in JAVA (SE1.8)
public class solution
{
	public static void ratInMaze(int maze [][])
	{
		int solution[][]=new int [maze.length][maze.length];
		solveMaze(maze,solution,0,0);
	}
	public static void solveMaze(int[][] maze,int [][] solution,int x,int y)
	{
		int n=maze.length;
		if(x==n-1&&y=n-1)
		{
			solution[x][y]=1;
			printSolution(solution);
			System.out.println();
			return;
		}
		if(x>n-1||x<0||y>n-1||y<0||maze[x][y]==0||solution[x][y]==1)
		{
			return;
		}
		solution[x][y]=1;
		solveMaze(maze,solution,x-1,y);
		solveMaze(maze,solution,x+1,y);
		solveMaze(maze,solution,x,y-1);
		solveMaze(maze,solution,x,y+1);
		solution[x][y]=0;
	}
	private static void printSolution(int [][] solution)
	{
		for(int i=0;i<solution.length;i++)
		{
			for(int j=0;j<solution[i].length;j++)
			{
				system.out.print(solution[i][j]+" ")
			}
		}
		System.out.println();
	}
}

