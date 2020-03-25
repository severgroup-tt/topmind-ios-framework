Pod::Spec.new do |spec|
  spec.name         = "TopMindSDK"
  spec.version      = "0.0.16"
  spec.summary      = "SDK for TopMind analytics"
  spec.description  = <<-DESC
                        iOS framework for Topmind analytics integration
                   DESC

  spec.homepage     = "https://github.com/severgroup-tt/topmind-ios-framework"
  spec.license      = { :type => 'Apache', :file => 'LICENSE' }
  spec.author       = { "kirillgudkov" => "for.example.nickname@gmail.com" }

  spec.source       = { :http => 'https://github.com/severgroup-tt/topmind-ios-framework/releases/download/0.0.16/topmind_sdk.zip' }
  spec.ios.deployment_target = '9.0'
  spec.source_files  = 'topmind_sdk.framework/Headers/topmind_sdk.h'
  spec.vendored_frameworks = 'topmind_sdk.framework'
end
