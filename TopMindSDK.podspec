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

  spec.source       = { :git => 'https://github.com/severgroup-tt/topmind-ios-framework.git', :tag => spec.version.to_s }
  spec.ios.deployment_target = '9.0'
  spec.source_files  = "./**/*.{h,m}"
end
