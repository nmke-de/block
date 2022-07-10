#include <pwd.h>
#include <unistd.h>
#include "BarnabasBox/Barnabas.h"

int main() {
	struct passwd *pw = getpwuid(geteuid());
	if(!pw) return 1;
	char buf[512];
	binit();
	bquit();
}
