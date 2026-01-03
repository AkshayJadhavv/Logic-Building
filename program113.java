// Input 5 4
/*
 
o	o	o	o	*	 
o	o	o	*	*	 
o	o	*	*	*	 
o	*	*	*	*	 
*	*	*	*	*


In this program outpur is same as previous one 
just it is solved using diifernet method              IMP

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

        for(i = 1; i <= iRow; i++)      // here
        {
            for(j = iCol; j >= 1; j--)  // here  we just reversed matrix
            {
              if(i >= j)
              {
                System.out.print("*\t");
              } 
              else
              {
                System.out.print("o\t");
              }
            }
            System.out.print(" \n");
        }
    }
}

class program113
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