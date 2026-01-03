// Input 5 4
/*
 
x  
x  x   
x  x  x  
x  x  x  x


for this in matrix condition should be (i >= j)   IMP

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
            for(j = 1; j <= i; j++)
            {
              System.out.print("*\t"); 
            }
            System.out.print(" \n");
        }
    }
}

class program111
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