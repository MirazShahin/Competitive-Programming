      ll sum = 0;
       ll mx_sub_sum = LONG_MIN;
       for(int i = 0; i < n; i++ ) {
          sum = (sum + v[i]);
          if(sum >= mx_sub_sum) {
            mx_sub_sum = sum;
          }
          if(sum < 0) {
            sum = 0;
          }
       }
      // for empty subarray
       if(mx_sub_sum < 0) {
          mx_sub_sum = 0;
       }
