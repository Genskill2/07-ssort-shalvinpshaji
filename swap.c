void swap_max(int arr[], int l, int n){
	int max_index = n;
	for (int i = n; i < l;i++){
		if (arr[max_index] < arr[i]){
			max_index = i;
		}
	}
	int temp = arr[n];
	arr[n] = arr[max_index];
	arr[max_index] = temp;
}

void ssort(int arr[], int l){
	for (int i = 0; i< l; i++){
		swap_max(arr, l, i);
	}
}
