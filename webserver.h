const char index_html[] = \
 "<!DOCTYPE html>"\
"<html>"\
"<body>"\
    "<h1>ESP8266 HTTP server demo </h1>"\
  "<button type='button' onclick='led_on()'>ON</button><br>"\
"<br>"\
  "<button type='button' onclick='led_off()'>OFF</button><br>"\
""\
"<script>"\
""\
 "function led_on(){"\
   "var xhttp;"\
    "if (window.XMLHttpRequest) {"\
       "xhttp = new XMLHttpRequest();"\
      "} else {"\
       "xhttp = new ActiveXObject(\"Microsoft.XMLHTTP\");"\
  "}"\
    "xhttp.open(\"GET\", 'led_on', true);"\
  "xhttp.send();"\
"}"\
""\
  "function led_off() {"\
   "var xhttp;"\
    "if (window.XMLHttpRequest) {"\
       "xhttp = new XMLHttpRequest();"\
      "} else {"\
       "xhttp = new ActiveXObject(\"Microsoft.XMLHTTP\");"\
  "}"\
    "xhttp.open(\"GET\", 'led_off', true);"\
  "xhttp.send();"\
"}"\
""\
"</script>"\
"</body>"\
"</html>";
int index_html_len = 591;
