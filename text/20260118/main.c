#include <stdio.h>
#define    N    80
int  fun(int  a[], int  n)
{int i,j,x;  
 for(i=0;i<n-1;i++)   
   for(j=i+1;j<n;j++)
     if(a[j]==a[i])
       {for(x=j+1;x<n;x++)
          a[x-1]=a[x];
          n--;
          j--;
        } 
 return(n); 
}
int main()
{  int  a[N]={2,2,2,3,4,4,5,6,6,6,6,7,7,8,9,9,10,10,10,10},i,n=20;void NONO ();
   printf("The original data :\n");
   for(i=0; i<n; i++)printf("%3d",a[i]);
   n=fun(a,n);
   printf("\n\nThe data after deleted :\n");
   for(i=0;i<n;i++)printf("%3d",a[i]); printf("\n\n");
   NONO();
   getchar();
}
void NONO ()
{/* 请在此函数内打开文件，输入测试数据，调用 fun 函数，输出数据，关闭文件。 */
  FILE *rf, *wf; int a[N], n, i, j ;
  rf = fopen("in.dat","r") ;
  wf = fopen("out.dat","w") ;
  for(i = 0 ; i < 5 ; i++) {
    fscanf(rf, "%d", &n) ;
    for(j = 0 ; j < n ; j++) fscanf(rf, "%d", &a[j]) ;
    n = fun(a, n) ;
    for(j = 0 ; j < n ; j++) fprintf(wf, "%4d", a[j]) ;
    fprintf(wf, "\n") ;
  }
  fclose(rf) ; fclose(wf) ;
}

