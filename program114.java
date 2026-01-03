// Input 5 4
/*
 
 	 	 	 	*	 
   	 	*	*	 
 	 	*	*	*	 
 	*	*	*	*	 
*	*	*	*	*

*/

import java.util.*;

class Pattern
{
    public void Display(int iRow, int iCol)
    {
        int i = 0;
        int j = 0;
        
        if(iRow != iCol)
        {
            System.out.println("Invalid Input");
            return;
        }

        for(i = 1; i <= iRow; i++)
        {
            for(j = iCol; j >= 1; j--)
            {
              if(i >= j)
              {
                System.out.print("*\t");
              } 
              else
              {
                System.out.print(" \t");
              }
            }
            System.out.print(" \n");

        }
    }
}

class program114
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number of rows : ");
        int iValue1 = sobj.nextInt();
    
        System.out.println("Enter Number of column : ");
        int iValue2 = sobj.nextInt();
    
        Pattern pobj = new Pattern();
    
        pobj.Display(iValue1,iValue2);
    }
}