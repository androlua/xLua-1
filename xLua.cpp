extern "C" {
    int luac_main(int argc, char* argv[]);
    int lua_main(int argc, char **argv);
}

int main(int argc, char* argv[]) {
    auto argv1 = argv[1];
    if (argc > 1 && argv1[0] == '-' && argv1[1] == 'c' && argv1[2] == '\0') {
        argv[1] = *argv;
        return luac_main(--argc, argv + 1);
    }
    return lua_main(argc, argv);
}
