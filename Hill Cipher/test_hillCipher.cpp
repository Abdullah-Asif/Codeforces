/* Created By
			Asif Abdullah
			14-04-2021
*/

#include <bits/stdc++.h>
using namespace std;

struct Array {
	int ara[2][2];
};

bool flag = false;

string ConvertText(string Text, Array var) {
	
	string encrypt = "";
	if (Text.size() % 2) {
		Text += 'Z';
		flag = true;
	}
	transform(Text.begin(), Text.end(), Text.begin(), :: toupper);
	vector<int> TextValue;
	for (int i = 0; i < Text.size(); i++) {
		int val = (int)Text[i] - 65;
		TextValue.push_back(val);
	}
	for (int i = 0; i < TextValue.size(); i += 2) {
		int a = var.ara[0][0] * TextValue[i];
		int b = var.ara[0][1] * TextValue[i+1];
		int c = var.ara[1][0] * TextValue[i];
		int d = var.ara[1][1] * TextValue[i+1];
		int val1 = (a + b) % 26;
		int val2 = (c + d) % 26;
		char c1 = char(65 + val1);
		char c2 = char(65 + val2);
		encrypt += c1;
		encrypt += c2;
	}
	return encrypt;
}

Array GetKDfromKE(Array var) {
	int D = (var.ara[0][0] * var.ara[1][1]) - (var.ara[0][1] * var.ara[1][0]);
	//cout << D << endl;
	if (D < 0) D += 26;
	Array InverseKE;
	memcpy(InverseKE.ara, var.ara, sizeof(InverseKE.ara));
	
	swap(InverseKE.ara[0][0], InverseKE.ara[1][1]);
	InverseKE.ara[0][1] = (InverseKE.ara[0][1] * -1) % 26;
	InverseKE.ara[1][0] = (InverseKE.ara[1][0] * -1) % 26;
	if (InverseKE.ara[0][1] < 0) InverseKE.ara[0][1] += 26;
	if (InverseKE.ara[1][0] < 0) InverseKE.ara[1][0] += 26;
	
	int t1;
	for (int i = 1; i < 26; i++) {
		if ((D * i) % 26 == 1) {
			t1 = i;
			break;
		}
	}
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			InverseKE.ara[i][j] *= t1;
			InverseKE.ara[i][j] %= 26;
			if (InverseKE.ara[i][j] < 0)
				InverseKE.ara[i][j] += 26;
		}
	}
	return InverseKE; 
}

int main () {
	//freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
  string Text;
  Array KE;
  cout << "Enter Your Text : "; 
 	cin >> Text;
 	cout << "Enter Your Key :" << endl;
 	bool valid = true;
	while (valid) {
		for (int i = 0; i < 2; i++) {
 			for (int j = 0; j < 2; j++) {
 				cin >> KE.ara[i][j];
 			}
 		}
 		int D = (KE.ara[0][0] * KE.ara[1][1]) - (KE.ara[0][1] * KE.ara[1][0]);
		if (D < 0) D += 26;
		for (int i = 1; i < 26; i++) {
			if ((D * i) % 26 == 1) valid = false;
		}
		if (valid) {
			cout << "This key matrix is invaild. Please try another one" << endl;
		}
	}
 	string encryptText = ConvertText(Text, KE);
 	string encrypt = encryptText;
 	if (flag) encrypt.pop_back();
 	cout << "Encrypted Text is : ";
 	cout << encrypt << endl;

 	Array KD;
 	KD = GetKDfromKE(KE);
 	string decryptedText;
 	decryptedText = ConvertText(encryptText, KD);
 	if (flag) decryptedText.pop_back();
 	cout << "DecryptedText Text is : ";
 	cout << decryptedText << endl;

}
