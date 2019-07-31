Pod::Spec.new do |spec|
  spec.name         = "TopMindSDK"
  spec.version      = "0.0.1"
  spec.summary      = "SDK for Topmind analytics"
  spec.description  = <<-DESC
                        iOS framework for Topmind analytics integration
                   DESC

  spec.homepage     = "https://github.com/severgroup-tt/topmind-ios-framework"
  spec.license      = { :type => 'Apache', :file => 'LICENSE' }
  spec.author       = { "kirillgudkov" => "for.example.nickname@gmail.com" }

  spec.source       = { :http => 'https://github.com/severgroup-tt/topmind-ios-framework/releases/download/0.0.1/topmind_sdk.zip' }
  spec.ios.deployment_target = '9.0'
  spec.public_header_files = 'topmind_sdk.framework/Headers/*.h'
  spec.vendored_frameworks = 'topmind_sdk.framework'
end
