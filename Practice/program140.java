import java.util.*;

class  program140
{
    public static void main(String[] A) 
    {
        Scanner sobj = new Scanner(System.in);

        int Arr[] = {10,20,30,40,};

        System.out.println(Arr.length);

        for(int iCnt = 0;iCnt < Arr.length; iCnt++)     //Bad programing practice
        {
            System.out.println(Arr[iCnt]);
        }

        System.out.println(iCnt); // Error
        
    }
}