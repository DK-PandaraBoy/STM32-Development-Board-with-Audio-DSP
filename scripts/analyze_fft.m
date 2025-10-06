% analyze_fft.m
% Compare input vs output audio spectra
[input, Fs] = audioread(fullfile('data','sample_input.wav'));
[output, ~] = audioread(fullfile('data','sample_output.wav'));


N = 2^14;
X = fft(input, N);
Y = fft(output, N);
f = (0:N-1) * Fs / N;


figure;
subplot(2,1,1);
plot(f(1:N/2), 20*log10(abs(X(1:N/2))));
xlabel('Frequency (Hz)'); ylabel('Magnitude (dB)');
title('Input Spectrum'); grid on;


subplot(2,1,2);
plot(f(1:N/2), 20*log10(abs(Y(1:N/2))));
xlabel('Frequency (Hz)'); ylabel('Magnitude (dB)');
title('Output Spectrum (Processed)'); grid on;
