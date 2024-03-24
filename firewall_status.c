#include <stdio.h>
#include <api.h>


chk_fw()
{
    const char * cmd = "systemctl status ufw.service";
    system(cmd);
}


int main(){
    chk_fw();
}

