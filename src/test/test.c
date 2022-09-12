#include "tests.h"

int main() {
    int no_failed = 0;

    Suite *s = tester("ALL TEST");

    SRunner *all;

    all = srunner_create(s);

    srunner_set_fork_status(all, CK_NOFORK);

    srunner_run_all(all, CK_NORMAL);

    no_failed += srunner_ntests_failed(all);

    srunner_free(all);

    return (no_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}
