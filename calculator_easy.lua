local a;
local b;
local operation;
local plus;
plus = "+";
local minus;
minus = "-";
local multi;
multi = "*";
local divide;
divide = "/";
local exit;
exit = break;
local C;
C = "clear";
local help;
help = print("operations: +, -, *, /, C, exit, help");

print("Welcome!");
print("Choice operation or press help!":);
io.read(operation);

if operation == plus then
    print(a + b)
    break
if operation == minus then
    print(a - b)
    break
if operation == multi then
    print(a * b)
    break
if operation == divide then
    print(a / b)
    break
if operation == exit then
    exit
if operation == C then
    print(C)
    return
if operation == help then
    print(help)
    break
end
