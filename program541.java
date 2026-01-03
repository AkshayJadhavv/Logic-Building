import java.util.*;

class Matrix
{
    private int Arr[][];
    
    public Matrix(int A, int B)
    {
        Arr = new int [A][B];
    }

    public void Accept()
    {
        System.out.println("Please enter the elements of matrix");

        Scanner sobj = new Scanner(System.in);
        int i = 0, j = 0;

        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr.length; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }
    }

    public void Display()
    {
        System.out.println("Elements of matrix are : ");

        int i = 0, j = 0;

        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr.length; j++)
            {
                System.out.print(Arr[i][j]+"\t");
            }
            System.out.println();
        }
    }

    public int CountEven()
    {
        int iCount = 0, i = 0, j = 0;

        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr.length; j++)
            {
                if(Arr[i][j] % 2 == 0)
                {
                    iCount++;
                }   
            }    
        }  

        return iCount;
    }

    public int Summation()
    {
        int iSum = 0, i = 0, j = 0;

        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr.length; j++)
            {
                iSum = iSum + Arr[i][j];  
            }    
        }  

        return iSum;
    }

    public int Maximum()
    {
        int iMax = 0, i = 0, j = 0;

        iMax = Arr[0][0];

        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr.length; j++)
            {
                if(iMax < Arr[i][j])
                {
                    iMax = Arr[i][j];
                } 
            }    
        }  

        return iMax;
    }

    public int Minimum()
    {
        int iMin = 0, i = 0, j = 0;

        iMin = Arr[0][0];

        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr.length; j++)
            {
                if(iMin > Arr[i][j])
                {
                    iMin = Arr[i][j];
                } 
            }    
        }  

        return iMin;
    }

    public float Average()
    {
        int iSum = 0, i = 0, j = 0;

        for(i = 0; i < Arr.length; i++)
        {
            for(j = 0; j < Arr.length; j++)
            {
                iSum = iSum + Arr[i][j];  
            }    
        }  

        return ((float)iSum / (float)(Arr.length * Arr[0].length));
    }
}

class program541
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of rows : ");
        int iRow = sobj.nextInt();

        System.out.println("Enter the number of columns : ");
        int iCol = sobj.nextInt();

        Matrix mobj = new Matrix(iRow,iCol);

        mobj.Accept();

        mobj.Display();

        int iRet = 0;
        float fRet = 0;

        iRet = mobj.CountEven();

        System.out.println("number of even number is : "+iRet);

        iRet = mobj.Summation();

        System.out.println("Addition is : "+iRet);

        iRet = mobj.Maximum();

        System.out.println("Maximum number is : "+iRet);

        iRet = mobj.Minimum();

        System.out.println("Minimum number is : "+iRet);

        fRet = mobj.Average();

        System.out.println("Average is : "+iRet);
    }
}    