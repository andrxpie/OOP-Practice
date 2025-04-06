#include "Email.h"

int main()
{
    Email e1; e1.SetFrom("Me"); e1.SetTo("Vasya"); e1.SetTheme("Who are you?");
    Email e2; e2.SetFrom("Vasya"); e2.SetTo("Me"); e2.SetTheme("vacuum cleaners!");
    Email e3; e3.SetFrom("Kolya"); e3.SetTo("Vasya"); e3.SetTheme("No! Thanks!");
    Email e4; e4.SetFrom("Vasya"); e4.SetTo("Me"); e4.SetTheme("washing machines!");
    Email e5; e5.SetFrom("Me"); e5.SetTo("Vasya"); e5.SetTheme("Yes");
    Email e6; e6.SetFrom("Vasya"); e6.SetTo("Petya"); e6.SetTheme("+2");

    ConsoleLogger logger;
    EmailSender sender(&logger);

    sender.Send(e1);
    sender.Send(e2);
    sender.Send(e3);
    sender.Send(e4);
    sender.Send(e5);
    sender.Send(e6);

    return 0;
}
