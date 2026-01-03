import java.util.Scanner;

// server  // dukandar 
class MarvellousString
{
    public String str;

    public MarvellousString(String a)  // constructor
    {
        this.str = a;
    }

    public int CountSmall()
    {
        
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
class program212
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String : ");
        String data = sobj.nextLine();        

        MarvellousString mobj = new MarvellousString(data);    
      
        int iRet = 0;

        iRet = mobj.CountSmall();

        System.out.println("Number of small charecter are : "+iRet);
    }
}