
// tinh tong cac so lien tiep lon nhat
// 3 1 -2 5 -3  == 7
//https://www.geeksforgeeks.org/largest-sum-contiguous-subarray/



void Solve()
{
	int i, sum = 0, res = -1e9;
	// while(cnt < N){
			for (i = 0; i < N; i++) {
			sum += D[i];
			res = max(res, sum);
			if(sum < 0) sum = 0;
		}
		// cnt++;
	// }
	
	sol = res;
}