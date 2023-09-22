#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'solve' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY a as parameter.
 */
void solve(vector<int> &a,vector<int>& ans,int s,int end,int bussize){
    //base case
    if(s >= end){
        return;
    }
    // three condition
    if(bussize==a[s]){
        ans.push_back(bussize);
        cout<<bussize;
        solve(a,ans,s++,end,bussize);
        bussize=0;
    }
    if(bussize >= a[s]){
        cout<<bussize;
        solve(a,ans,a[s]+a[s+1],end,bussize);
    }
    if(bussize <= a[s]){
        cout<<bussize;
        solve(a,ans,s,end,bussize++);
    }
    
}
vector<int> solve(vector<int> a) {
  vector<int> ans;
  if(a.empty()==false){
      return ans;
  }
  int x=1;
  int s=0;
  int end=a.size();
  solve(a,ans,s,end,x);
  return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string a_count_temp;
    getline(cin, a_count_temp);

    int a_count = stoi(ltrim(rtrim(a_count_temp)));

    string a_temp_temp;
    getline(cin, a_temp_temp);

    vector<string> a_temp = split(rtrim(a_temp_temp));

    vector<int> a(a_count);

    for (int i = 0; i < a_count; i++) {
        int a_item = stoi(a_temp[i]);

        a[i] = a_item;
    }

    vector<int> result = solve(a);

    for (size_t i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << " ";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}

