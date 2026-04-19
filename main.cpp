int main(){
	int x,y;
	double d;
	cin>>x>>y;
	if(cin.fail()){
		cerr<<"Incorrect type entered"; return 1;
	}
	if(abs(x)>1000 ||abs(y)>1000){
		cerr<<"alue out of range"; return 1;
	}
	if (y==0) {
		cerr<< "Error divide by zero"; return 1;
	}

	d=(double) x/y;
	cout<< "The result is" <<d;
	return 0;
}
