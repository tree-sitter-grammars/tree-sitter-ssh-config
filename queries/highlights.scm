; Literals

(string) @string

(pattern) @string.regexp

(token) @string.special.symbol

[
  (number)
  (bytes)
  (time)
] @number

[
  (kex)
  (mac)
  (cipher)
  (key_sig)
] @string.special

[
  ; generic
  "yes" "no"
  "ask" "auto"
  "none" "any"
  ; ControlMaster
  "autoask"
  ; FingerprintHash
  "md5" "sha256"
  ; PubkeyAuthentication
  "unbound" "host-bound"
  ; RequestTTY
  "force"
  ; SessionType
  "subsystem" "default"
  ; StrictHostKeyChecking
  "accept-new" "off"
  ; Tunnel
  "point-to-point" "ethernet"
  (ipqos)
  (verbosity)
  (facility)
  (authentication)
] @constant.builtin

(uri) @markup.link.url

; Keywords

[ "Host" "Match" ] @keyword

(parameter keyword: _ @keyword)

(host_declaration argument: _ @tag)

(match_declaration
  (condition criteria: _ @attribute))

"all" @attribute

; Misc

[
  "SSH_AUTH_SOCK"
  (variable)
] @constant

(comment) @comment

(ERROR) @error

; Punctuation

[ "${" "}" ] @punctuation.special

[ "\"" "," ":" "@" ] @punctuation.delimiter

[ "=" "!" "+" "-" "^" ] @operator

[ "*" "?" ] @character.special
