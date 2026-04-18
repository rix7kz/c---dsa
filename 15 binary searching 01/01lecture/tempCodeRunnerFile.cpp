    int x = 6;
    int l =0;
    int h=n-1;
    while (l<h){
        int m  = l(h-l)/2;   
        if (arr[m]==x) cout<<arr[m];
        else if(arr[m]>x) h= m-1;
        else l= m;

    }