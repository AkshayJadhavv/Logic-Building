import java.util.*;

class Number
{
    public int SumNonFactor(int iNo)
    {
        int iCnt = 0;
        int iSum = 0;

       for(iCnt = 1; iCnt < iNo; iCnt++)
       {
            if((iNo % iCnt) != 0)
            {
                iSum = iSum + iCnt;
            }
       }
       return iSum;
    }
}

class program63
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number : ");
        int iValue = sobj.nextInt();

        Number nobj = new Number();

        int iRet = nobj.SumNonFactor(iValue);

        System.out.println("Sum of NonFactor : "+iRet);

        
    }
}