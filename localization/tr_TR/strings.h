﻿/*
  AltDrag - en-US localization by Stefan Sundin

  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.
*/

struct strings tr_TR = {
 /* === translation info === */
 /* code               */ L"tr-TR",
 /* lang_english       */ L"Turkish",
 /* lang               */ L"Türkçe",
 /* author             */ L"Melih Ak",

 /* === app === */
 /* tray_enabled       */ APP_NAME L"",
 /* tray_disabled      */ APP_NAME L" (Devre Dışı)",

 /* menu */
 /* enable             */ L"Etkinleştir",
 /* disable            */ L"Devre Dışı",
 /* hide               */ L"Gizle",
 /* update             */ L"Güncelleme Mevcut!",
 /* config             */ L"Konfigürasyon",
 /* about              */ L"Hakkında",
 /* exit               */ L"Çıkış",

 /* update */
 /* balloon            */ L"Yeni bir sürüm mevcut!",
 /* dialog             */ L"Yeni bir sürüm mevcut. Siteye gitmek ister misiniz?",
 /* nonew              */ L"En güncel sürümü kullanıyorsunuz.",

 /* === config === */
 /* title              */ APP_NAME L" Konfigürasyon",
 /* tabs */
 /* general            */ L"Genel",
 /* input              */ L"Klavye ve Fare",
 /* blacklist          */ L"Kara Liste",
 /* advanced           */ L"Gelişmiş",
 /* about              */ L"Hakkında",

 /* general tab */
 /* box                */ L"Genel ayarlar",
 /* autofocus          */ L"&Sürüklerken pencerelere odaklan.\nAyrıca pencereye odaklanmak için CTRL tuşunu kullanabilirsiniz.",
 /* aero               */ L"Mimic &Aero Snap",
 /* inactivescroll     */ L"&Aktif olmayan pencereler arası geçiş yaparken kaydır",
 /* mdi                */ L"&MDI desteği",
 /* autosnap           */ L"Şuna otomatik yapış:",
 /* autosnap0          */ L"Devre Dışı",
 /* autosnap1          */ L"ekran kenarlarına",
 /* autosnap2          */ L"+ pencerelerin dışına",
 /* autosnap3          */ L"+ pencerelerin içine",
 /* language           */ L"Dil:",
 /* autostart_box      */ L"Otomatik başlatma",
 /* autostart          */ L"G&iriş yaparken "APP_NAME"i başlat",
 /* autostart_hide     */ L"&Simgeyi gizle",
 /* autostart_elevate  */ L"&Yönetici ayrıcalıklarına yükselt",
 /*       elevate_tip  */ L"UAC'yi tamamen devre dışı bırakmadığınız sürece -ÖNERİLMEZ- her giriş yaptığınızda UAC onay penceresi açılacaktır.",
 /* elevate            */ L"Y&ükselt",
 /* elevated           */ L"Yükseltildi",
 /* elevate_tip        */ L"Bu, yönetici ayrıcalıklarıyla yeni bir "APP_NAME" oturumu oluşturacaktır. Bu "APP_NAME"'ın diğer yönetici ayrıcalıklarıyla çalışan uygulamaları yönetmesine izin verir.\n\n "APP_NAME"'ı yönetici ayrıcalıklarıyla çalıştırmak için UAC penceresini onaylamanız gerekmektedir.",
 /* elevation_aborted  */ L"Yükseltme iptal edildi.",
 /* autosave           */ L"Not: Ayarlar anında kaydedilir ve uygulanır!",

 /* input tab */
 /* mouse */
 /* box                */ L"Fare ayarları",
 /* lmb                */ L"Sol fare tuşu:",
 /* mmb                */ L"Orta fare tuşu:",
 /* rmb                */ L"Sağ fare tuşu:",
 /* mb4                */ L"Fare tuşu 4:",
 /* mb5                */ L"Fare tuşu 5:",
 /* scroll             */ L"Kaydırma tekerleği:",
 /* lowerwithmmb       */ L"&Orta fare tuşu ile pencereleri alta indir",

 /* actions */
 /* move               */ L"Pencereyi sürükle",
 /* resize             */ L"Pencereyi yeniden boyutlandır",
 /* close              */ L"Pencereyi kapat",
 /* minimize           */ L"Pencereyi simge durumuna küçült",
 /* lower              */ L"Pencereyi alta indir",
 /* alwaysontop        */ L"Pencereyi her zaman üstte tut",
 /* center             */ L"Pencereyi ortala",
 /* nothing            */ L"Hiçbir şey yapma",
 /* alttab             */ L"Alt+Tab",
 /* volume             */ L"Hacim",
 /* transparency       */ L"Şeffaflık",

 /* hotkeys */
 /* box                */ L"Klavye ayarları:",
 /* leftalt            */ L"S&ol Alt",
 /* rightalt           */ L"&Sağ Alt",
 /* leftwinkey         */ L"Sol &Windows tuşu",
 /* rightwinkey        */ L"Sağ W&indows tuşu",
 /* leftctrl           */ L"Sol &Ctrl",
 /* rightctrl          */ L"Sağ C&trl",
 /* more               */ L"İstediğiniz tuşu 'ini' dosyasını düzenleyerek ekleyebilirsiniz.\nShift tuşunu kullanarak pencereleri birbirine yapıştır.",

 /* blacklist tab */
 /* box                */ L"Kara Liste Ayarları",
 /* processblacklist   */ L"Uygulama Kara Liste:",
 /* blacklist          */ L"Kara Liste",
 /* snaplist           */ L"Snaplist:",
 /* explanation        */ L"Kara Listenin nasıl çalıştığını öğrenmek için <a href=\"https://stefansundin.github.io/altdrag/doc/blacklist.html\">the website</a> sayfasına göz atabilirsiniz!",
 /* findwindow_box     */ L"Pencereyi bul",
 /* _explanation       */ L"Bir pencere sınıfını tanımlamak için simgeye tıklayın. Bu sayede, pencere sınıfını yukarıdaki Kara Listeye veya Snaplist'e ekleyebilirsiniz.",

 /* advanced tab */
 /* box                */ L"Gelişmiş Ayarlar",
 /* hookwindows        */ L"&EPencereleri sürüklerken yapışmayı etkinleştir.\nOtomatik yapışma ile birlikte çalışır!",
 /* hookwindows_warn   */ L"Note that this is not 100% safe as this feature works by hooking into other processes. This might be risky to use when playing games with anti-cheat protection.\n\nAre you sure you want to enable this feature?",
 /* checkonstartup     */ L"A&utomatically check for updates",
 /* beta               */ L"Check for &beta versions",
 /* checknow           */ L"&Check now",
 /* ini                */ APP_NAME L"'s settings are saved in "APP_NAME".ini. There are a few things that you can only configure by editing the file manually.",
 /* openini            */ L"Open &ini file",

 /* about tab */
 /* box                */ L"About "APP_NAME,
 /* version            */ L"Version "APP_VERSION,
 /* author             */ L"Created by Stefan Sundin",
 /* license            */ APP_NAME L" is free and open source software!\nFeel free to redistribute!",
 /* donate             */ L"&Donate",
 /* translation_credit */ L"Translation credit",

 /* === misc === */
 /* unhook_error       */ L"There was an error disabling "APP_NAME". This was most likely caused by Windows having already disabled "APP_NAME"'s hooks.\n\nIf this is the first time this has happened, you can safely ignore it and continue using "APP_NAME".\n\nIf this is happening repeatedly, you can read on the website how to prevent this from happening again (look for '"APP_NAME" mysteriously stops working' in the documentation).",
};
