// 2. Thuật toán đường đi ngắn nhất Dijkstra

// * Ý tưởng: Ta sẽ dùng các đỉnh ĐÃ tìm được đường đi ngắn nhất để tối ưu đường đi của các đỉnh CHƯA tìm được đường đi ngắn nhất, cụ thể:
// - Ta sẽ chia các đỉnh thành 2 tập: tập T1 chứa các đỉnh ĐÃ tìm được đường ngắn nhất từ S;  tập T2 chứa các đỉnh CHƯA tìm được đường ngắn nhất từ S; Ta khởi tạo T1={∅}; T2: chứa tất cả các đỉnh.
// - Gọi F[i]=∞ là độ dài đường đi từ S đến i. Ban đầu có F[S]=0 (vì S là đỉnh xuất phát); 

// * Các bước thực hiện cụ thể như sau:

// Bước 1: Tìm kiếm đỉnh V mà có F nhỏ nhất trong T2. Nếu V=E (tìm được đường đến E rồi thì dừng).

// Bước 2: Xóa đỉnh V bên T2 và chuyển qua T1 (chứa đỉnh đã tìm được đường đi MIN)

// Bước 3: Dùng đỉnh V để tối ưu đường đi đến các đỉnh trong T2 mà nối với V

// Bước 4: Quay lại bước 1.

// Bước 5: In kết quả ra.

// * Độ phức tạp: O(n^2)
#define maxn 1000
#define maxf 1000000000
#include <iostream>
#include <fstream>
using namespace std;

int a[maxn][maxn],n,m,s,e;
int f[maxn],trace[maxn],checkt2[maxn];

void  readf(){
  fstream inp("input.txt");
  inp>>n>>m;
  inp>>s>>e;
  for(int i=1;i<=n;i++)
  for(int j=1;j<=n;j++) a[i][j]=-1;
  for(int i=1;i<=m;i++){
    int u,v;
    inp>>u>>v;
    inp>>a[u][v];
    a[v][u]=a[u][v];
  }
  inp.close();
}
void dijkstra(){
  for(int i=1;i<=n;i++){
    f[i]=maxf;
    checkt2[i]=true;
    trace[i]=0;
  }
  f[s]=0;
  trace[s]=0;
  int v=s,fmin;
  while(v!=e){
    //tim v
    fmin=maxf;
    for(int i=1;i<=n;i++)
    if(checkt2[i] && fmin>f[i]){
      fmin=f[i];
      v=i;
    }
    if(fmin==maxf) break;
    //xoa v khoi T2
    checkt2[v]=false;
    //toi uu cac dinh trong T2
    for(int i=1;i<=n;i++)
    if(a[v][i]>0 && f[i]>f[v]+a[v][i]){
      f[i]=f[v]+a[v][i];
      trace[i]=v;
    }
  }
}
void output(){
  if(f[e]==maxf) cout<<"NO PATH";
  else{
    cout<<f[e]<<"\n";
    int path[maxn],d=0;
    d++;
    path[d]=e;
    while(trace[e]!=0){
        e=trace[e];
        d++;
        path[d]=e;
    }
    for(int i=d;i>0;i--)
    cout<<path[i]<<" ";

  }
  
  

}

int main(){
  readf();
  dijkstra();
  output();
}