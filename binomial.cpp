mport java.util.Scanner;

class Binomial {
    public int cal(int n,int r)
    {
        int arr[]=new int[r+1];
        arr[0]=1;
        for(int i=1;i<=n;i++)
        {
            for(int j=Math.min(r,i);j>0;j--)
            {
               
                    arr[j]=arr[j]+arr[j-1];
                    //System.out.print(arr[j]);
                    
            }
            //System.out.println();
        }
        
        return arr[r];
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        Binomial b=new Binomial();
        int n=sc.nextInt();
        int r=sc.nextInt();
        int ans=b.cal(n,r);
        System.out.println(ans);
    }

}
