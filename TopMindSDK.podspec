Pod::Spec.new do |spec|
  spec.name         = "TopMindSDK"
  spec.version      = "0.0.1"
  spec.summary      = "A short description of TopMindSDK."
  spec.description  = <<-DESC
                   DESC

  spec.homepage     = "https://github.com/severgroup-tt/topmind-ios-framework"
  spec.license      = "MIT (example)"
  spec.author       = { "kirillgudkov" => "for.example.nickname@gmail.com" }

  spec.source       = { :git => 'https://github.com/severgroup-tt/topmind-ios-framework.git', :tag => s.version.to_s }
  s.ios.deployment_target = '9.0'
  spec.source_files  = "Classes", "Classes/**/*.{h,m}"
end
