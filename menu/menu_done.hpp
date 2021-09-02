#pragma once

enum MenuDoneError {
    MENU_DONE_NO_ERROR = 0,
    MENU_DONE_MCP_FAIL = 1,
    MENU_DONE_NO_MIIVERSE = 2,
    MENU_DONE_NO_CFW = 3,
    MENU_DONE_CFW_FAIL = 4,
    MENU_DONE_NO_BACKUP = 5,
    MENU_DONE_NO_CERT_BACKUP = 6,
    MENU_DONE_BACKUP_FAIL = 7,
    MENU_DONE_PATCH_FAIL = 8,
    MENU_DONE_PATCH_BAD = 9,
    MENU_DONE_PATCH_FAIL_DANGEROUS = 10,
    MENU_DONE_PATCH_FAIL_CERT_BRICK = 11,
};

void RenderMenuDone(MenuDoneError err);
