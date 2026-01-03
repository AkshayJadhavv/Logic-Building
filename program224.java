import java.util.Scanner;

class ArrayX
{
    protected int Arr[];   // change here

    public ArrayX(int iSize) // constructor changed
    {
        System.out.println("allocating the Resources...");
        Arr = new int[iSize];    // Resource allocation
    }

    protected void finalize() // destructor
    {
        System.out.println("Deallocating the Resources...");
        Arr = null;
    }

    public void Accept()
    {
        int iCnt = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the elements : ");
        for(iCnt = 0; iCnt < this.Arr.length; iCnt++)
        {
            this.Arr[iCnt] = sobj.nextInt();
        }
    }

    public void Display()
    {
        int iCnt = 0;

        System.out.println("Elements of the array are : ");
        for(iCnt = 0; iCnt < this.Arr.length; iCnt++)
        {
            System.out.println(this.Arr[iCnt]);
        }
        
        //sobj = null;
    }
}

class NNumberX extends ArrayX
{
    public NNumberX(int iSize)
    {
        super(iSize);
    }

    public int CountEven()
    {
        int iCount =0, iCnt = 0;

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] % 2) == 0)
            {
                iCount++;
            }
        }
        return iCount;
    }
}

class program224
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of elements : ");
        int iSize = sobj.nextInt();

        NNumberX nobj = new NNumberX(iSize); 

        nobj.Accept();

        nobj.Display();

        int iRet = 0;

        iRet = nobj.CountEven();
        
        System.out.println("Number of even element are : "+iRet);

        sobj = null;
        
        nobj = null;

        System.gc();
    }
}