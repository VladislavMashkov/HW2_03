#include <catch.hpp>
#include "main.hpp"
TEST_CASE("Check functions", "[explorer]") {
	SECTION("Check INIT")
	{
		fs::path Path("dir");
		bool ok = print_data(Path);
		cout << ok << endl;
		REQUIRE( ok == true);
	}
}
