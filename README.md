# nathanielevan's build of slock

[slock](https://tools.suckless.org/slock/) is a simple X display locker by [suckless](https://suckless.org). This repository hosts nathanielevan's slock configuration, including a selection of patches hosted in [the suckless website](https://tools.suckless.org/slock/patches/) to make it usable.

Included in this build:
- Colour configuration based on the Nord colour scheme
- [DPMS patch](https://tools.suckless.org/slock/patches/dpms/)
- [Message patch](https://tools.suckless.org/slock/patches/message/)
  * Also patched for Xft font support, inspired by [benruijl's slock fork](https://github.com/benruijl/sflock/tree/xft). Get the patch [here](xft-support.patch?raw=true) (must be applied on top of the message patch!)
- [PAM auth patch](https://tools.suckless.org/slock/patches/pam_auth/)
