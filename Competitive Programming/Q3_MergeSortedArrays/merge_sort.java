static void merge(int[] arr1, int arr2[], int n, int m) {
    // code here
    int i, k;
    for (i = 0; i < n; i++) {
      if (arr1[i] > arr2[0]) {
        int temp = arr1[i];
        arr1[i] = arr2[0];
        arr2[0] = temp;
      }

      int first = arr2[0];
      for (k = 1; k < m && arr2[k] < first; k++) {
        arr2[k - 1] = arr2[k];
      }
      arr2[k - 1] = first;
    }
  }