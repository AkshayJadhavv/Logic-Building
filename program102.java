// Input 4 4
/*
  1  2  3  4
  5  6  7  8
  9  10 11 12
  13 14 15 16
*/

import java.util.*;

class Pattern
{
    public void Display(int iRow, int iCol)
    {
        int i = 0;
        int j = 0;
        int iCnt = 0;

        for(i = 1, iCnt = 1; i <= iRow; i++)
        {
            for(j = 1; j <= iCol; j++,iCnt++)
            {
                System.out.print(iCnt+"\t");
            }
            System.out.print("\n");
        }
    }
}

class program102
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