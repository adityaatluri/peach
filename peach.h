#ifndef PEACH_H
#define PEACH_H

#include<vector>

namespace peach{
	class args{
		std::vector<std::string> str_args;
		int num_args;
		public:
		args(int ,char** );
		std::vector<std::string> get_str_args();
		int get_num_args();
		void print_args();
	};
}

namespace peach{
	class kernel_code{
	};
}

namespace peach{
	class host_code{
	};
}
#endif
