#include "cute.h"
#include "ide_listener.h"
#include "cute_runner.h"

void RunTestSuites() {
	cute::suite s;
	//TODO add your test here
	//s += edge_graph::EdgeGraphSuite();
	cute::ide_listener lis;
	cute::makeRunner(lis)(s, "De Bruijn Project Test Suites");
}

int main() {
	RunTestSuites();
	return 0;
}
