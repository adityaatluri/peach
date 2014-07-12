#include<iostream>
#include<vector>
#include"peach.h"

using namespace std;

peach::args::args(int argc, char** argv){
	for(int i = 1; i < argc; i++){
		str_args.push_back(argv[i]);
	}
	num_args = argc-1;
}

vector<string> peach::args::get_str_args(){
	return str_args;
}

int peach::args::get_num_args(){
	return num_args;
}

void peach::args::print_args(){
	for(int i=0;i<num_args;i++){
		cout<<str_args[i]<<endl;
	}
}

int main(int argc, char **argv){
	peach::args arg(argc,argv);
	arg.print_args();
	return 0;
}
