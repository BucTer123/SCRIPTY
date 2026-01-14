extern "C" void kmain() {
    u8int_t* text1 = " === Installing Kernel [OK!]\n";
    u16int_t* key1;
    asm (
        "xor ah, 0x40\n";
        "int 0x10\n":
        "xor al, 0x30\n";
    )
    return key1;
}
extern "C" u16int_t* kwifi() {
    u8int_t* text2 = " === Searching wifi.....\n";
    u16int_t* key2;
    asm (
        "mov dx, 0xC";
        "mov eax, 0x80000000\n";
        "out dx, eax\n";

        "mov dx, 0xCFC\n";
        "in eax, dx\n";
    )
    return key2;
}
extern "C" u16int_t* kkern() {
    u8int_t* text3 = " === GOTO OS! [ OK ]"
    u16int_t* key3;
    asm (
        "test al, al\n";
        "test ah, ah\n";
        "test rdi, rdi\n";
        "test dx , dx\n";
    )
    return key3;
}