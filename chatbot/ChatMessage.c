//
//  ChatMessage.c
//  chatbot
//
//  Created on 5/4/16.
//  Copyright © 2016 NobodyNada. All rights reserved.
//

#include "ChatMessage.h"
#include <stdlib.h>
#include <string.h>

ChatMessage *createChatMessage(const char *text, unsigned long messageID, unsigned long replyID, ChatUser *user) {
    ChatMessage *m = malloc(sizeof(ChatMessage));
    m->content = malloc(strlen(text) + 1);
    strcpy(m->content, text);
    m->id = messageID;
    m->replyID = replyID;
    m->user = user;
    return m;
}

void deleteChatMessage(ChatMessage *m) {
    free(m->content);
    free(m);
}