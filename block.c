#include <shadow.h>
#include <pwd.h>
#include <unistd.h>
#include "BarnabasBox/Barnabas.h"

#ifndef PASS_MAX
#define PASS_MAX 512
#endif

int main() {
	struct passwd *pw = getpwuid(geteuid());
	if(!pw) return 1;
	char buf[PASS_MAX];
	binit();
	bquit();
}
