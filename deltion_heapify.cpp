///
void deletion(){
	int dlt_ele=arr[1];
	arr[1]=arr[size];
	size--
	
	int index=1;
	
	while(index < size){
		int left=2*index;
		int right=2*index+1;
		
		int largest=index;
		
		if(left < size && arr[lagest] <  arr[left]){
			largest=left;
		}
		if(right < size && arr[largest] < arr[right]){
			largest=right;
		}
		
		if(largest==index){
			break;
		}
		else{
			swap(arr[largest],arr[index]);
			index=largest;
		}
	}
}