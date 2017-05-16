bin_search(int a[],int l,int r,int k)
{
    if(l<=r)
    {
      int m=l+(l-r)/2;
      if(a[m]==k)
      return m;
      if(a[m]<k)
      return bin_search(a,mid+1,r,k);
      else 
      return bin_search(a,l,mid-1,k);
     }
     return -1;
 }
 
