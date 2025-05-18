import java.util.*;

class Digits
{
    public void DisplayEven(int iNo)
    {
        int iCnt = 0;
        int iDigit = 0;

        while(iNo != 0)      
        {
            iDigit = iNo % 10;

            if((iDigit % 2) == 0)
            {
                System.out.println("Evn digits are : "+iDigit);
            }

            iNo = iNo / 10;
        }
    }
}

class program69
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number ; ");
        int iValue = sobj.nextInt();

        Digits dobj = new Digits();

        dobj.DisplayEven(iValue);

    }
}