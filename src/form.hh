#ifndef __FORM_HH__
#define __FORM_HH__

#include "url.h"

/*
 * Typedefs 
 */

typedef enum {
   DILLO_HTML_METHOD_UNKNOWN,
   DILLO_HTML_METHOD_GET,
   DILLO_HTML_METHOD_POST
} DilloHtmlMethod;

typedef enum {
   DILLO_HTML_ENC_URLENCODING,
   DILLO_HTML_ENC_MULTIPART
} DilloHtmlEnc;

/*
 * Classes 
 */

class DilloHtmlForm;
class DilloHtml;

/*
 * Form API 
 */

DilloHtmlForm *a_Html_form_new(DilloHtml *html,
                               DilloHtmlMethod method,
                               const DilloUrl *action,
                               DilloHtmlEnc enc,
                               const char *charset);

void a_Html_form_delete(DilloHtmlForm* form);

/*
 * Form parsing functions 
 */

void Html_tag_open_form(DilloHtml *html, const char *tag, int tagsize);
void Html_tag_close_form(DilloHtml *html, int TagIdx);
void Html_tag_open_input(DilloHtml *html, const char *tag, int tagsize);
void Html_tag_open_isindex(DilloHtml *html, const char *tag, int tagsize);
void Html_tag_open_textarea(DilloHtml *html, const char *tag, int tagsize);
void Html_tag_close_textarea(DilloHtml *html, int TagIdx);
void Html_tag_open_select(DilloHtml *html, const char *tag, int tagsize);
void Html_tag_close_select(DilloHtml *html, int TagIdx);
void Html_tag_open_option(DilloHtml *html, const char *tag, int tagsize);
void Html_tag_open_button(DilloHtml *html, const char *tag, int tagsize);
void Html_tag_close_button(DilloHtml *html, int TagIdx);

#endif /* __FORM_HH__ */