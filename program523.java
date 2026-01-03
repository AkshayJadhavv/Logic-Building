import java.util.*;


class program523
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String : ");

        String str = sobj.nextLine();

        str = str.trim();

        str = str.replaceAll("\\s+"," ");

        String tokens[] = str.split(" ");

        int iMax = 0, MaxIndex = 0;

        for(int i = 0; i < tokens.length; i++)
        {
            if(tokens[i].length() > iMax)
            {
                iMax = tokens[i].length();
                MaxIndex = i;
            }
        }

        System.out.println("largest string: "+tokens[MaxIndex]+ "number of charectes : "+iMax);
       
    }
}