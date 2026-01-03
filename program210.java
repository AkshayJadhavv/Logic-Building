import java.util.Scanner;

// server  // dukandar 
class MarvellousString
{
    public int CountSmall(String str)
    {
        // dukandarachi resposnibility ahe string convert karyachi
        
        char Arr[] = str.toCharArray();  // Converted to array

        int iCount = 0, iCnt = 0;

        for(iCnt = 0; iCnt < Arr.length; iCnt++)    //
        {
            if((Arr[iCnt] > 'a') && (Arr[iCnt] <= 'z'))
            {
                iCount++;
            }
        }

        return iCount;
    }
}

// client  // ghar
class program210
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String : ");
        String str = sobj.nextLine();        

        MarvellousString mobj = new MarvellousString();   // we cant pass while creaing object 
                                                // beacuse there is no constructor inside server

        int iRet = 0;

        iRet = mobj.CountSmall(str);

        System.out.println("Number of small charecter are : "+iRet);
    }
}