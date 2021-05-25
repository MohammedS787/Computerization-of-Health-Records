#include <bits/stdc++.h>
#include "program.cpp"
#define loop(i, n) for (int i = 0; i < n; i++)
#define loop1(i, n) for (int i = 1; i < n; i++)
#define vloop(v) for (auto it = v.begin(); it != v.end(); it++)
#define range(v) (v.begin(), v.end())
#define endl '\n'
#define vi vector<int>
#define io                        \
	ios_base::sync_with_stdio(0); \
	cin.tie(0);                   \
	cout.tie(0);
typedef long long ll;
using namespace std;
//--------------------------------------------------------------------------------//

int main()
{
	io HeartRate person("Mohammed", "Hamada", "Male", 27, 1, 2002, 1.68, 99);
	person.print();
	return 0;
}
