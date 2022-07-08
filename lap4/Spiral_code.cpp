 // for(size_t i=0; i < n; ++i){
    //     for(size_t j=0; j < n; ++j){
    //         if(j <= n-1 && i == 0){
    //             arr[i][j] = j+1;
    //         }
    //         else if(i > 0 && j == n && arr[i][j] == 0){
    //             arr[i][j] = n+i;
    //         }
    //         else if(i == n-1 && arr[i][j] == 0){
    //             arr[i][j] = 2*n-j+n;
    //         }
    //         else if(j == 0 && arr[i][j] == 0){
    //             arr[i][j] = 3*n-i+n-1;
    //         }
    //     }
    // } 

   
    // // for(size_t j = 1; j < n; ++j){
    // //     arr[n][j] = 2*n-j+n-1;
    // // }
        
    // // for(size_t i = n-1; i >= 1; --i){
    // //     if(arr[i][1] != 1){
    // //         arr[i][1] = 2*n+i;
    // //     }
    // // }
    // // for(size_t j=2; j < n; ++j){
    // //     if(arr[2][j] != n+1){
    // //         arr[2][j] = 2*n+j+1;
    // //     }
    // // }