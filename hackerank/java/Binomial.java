import java.util.Scanner;

class Binomial {
    public int tilling_function(int n)
    {
        int arr[]=new int[n+1];
        arr[0]=0;
        arr[1]=1;
        arr[2]=2;
        for(int i=3;i<=n;i++)
        {
          arr[i]=arr[i-1]+arr[i-2];
        }
        
        return arr[n];
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        Binomial b=new Binomial();
        int n=sc.nextInt();
        int ans=b.tilling_function(n);
        System.out.println(ans);
    }

}
