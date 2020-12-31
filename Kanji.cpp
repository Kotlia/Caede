export module Kanji;

import KanjiComponent;
import <string>;

namespace me::kotlia
{

	using IOException = java::io::IOException;
	using URI = java::net::URI;
	using URLEncoder = java::net::URLEncoder;
	using HttpClient = java::net::http::HttpClient;
	using HttpRequest = java::net::http::HttpRequest;
	using HttpResponse = java::net::http::HttpResponse;
	using StandardCharsets = java::nio::charset::StandardCharsets;

	export class Kanji
	{
	public:
		static std::wstring encodeURIComponent(const std::wstring &str)
		{
			return URLEncoder::encode(str, StandardCharsets::UTF_8);
		}
		static KanjiComponent *toKanji(const std::wstring &str)
		{
			HttpRequest *request = HttpRequest::newBuilder(URI::create(L"http://www.google.com/transliterate?langpair=" + encodeURIComponent(L"ja-Hira|ja") + L"&text=" + encodeURIComponent(str))).build();
			return new KanjiComponent(HttpClient::newBuilder().build().send(request, HttpResponse::BodyHandlers::ofString(StandardCharsets::UTF_8)).body());
		}
	};

}
